#pragma once
#include<string>
#include <msclr/marshal_cppstd.h>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#define loop(i, n) for(int i = 0; i < n; i++)
	typedef long long ll;
	const ll mody = 26;
	template<class T = ll>
	struct matrix {
		vector<vector<T>> v;
		int r, c;
		matrix(int ar, int ac, int sig = -1) : r(ar), c(ac) {
			if (sig != -1) { //zeroes the matrix
				loop(i, r) {
					vector<T> vv(c, 0);
					v.push_back(vv);
				}
			}
			if (sig == 1) { //only use for n*n matrices
				loop(i, r) {
					v[i][i] = 1;
				}
			}
		}
		void cmatrix() {
			loop(i, r) {
				vector<T> vv = clist<T>(c);
				v.push_back(vv);
			}
		}
		void csmatrix() { //only call for strings
			loop(i, r) {
				string ss;
				cin >> ss;
				v.push_back(cstrtv(ss));
			}
		}

		//to test
		vector<T> row(int i) {
			return v[i];
		}
		vector<T> col(int i) {
			vector<T> f(r);
			loop(j, r) {
				f[j] = (v[j][i]);
			}
			return f;
		}
		vector<T> splay(bool dag = 0) {
			vector<T> ret(r * c);
			loop(i, r) {
				loop(j, c) {
					int jy = (i % 2 && dag) ? (c - j - 1) : j;
					ret[i * c + j] = v[i][jy];
				}
			}
			return ret;
		}


		vector<T>& operator[] (int ind) { //supports empty and nulls FAST ACCES DUE TO REF
			return v[ind];
		}
		vector<T> operator() (int ind) { //supports empty and nulls
			return col(ind);
		}
		matrix<ll> modmult(matrix<ll> mp) {
			matrix mult(r, mp.c, 0);
			//cout<<mult<<endl;
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < mp.c; j++) {
					for (int k = 0; k < c; k++) {
						mult[i][j] += (v[i][k] * mp[k][j]) % mody;
						mult[i][j] %= mody;
					}
				}
			}
			return mult;
		}
		matrix<ll> modexp(ll e) {
			if (e == 0) {
				return matrix(r, r, 1);
			}
			else {
				if (e % 2) {
					return modmult(modexp(e - 1));
				}
				else {
					auto mint = modexp(e / 2);
					return mint.modmult(mint);
				}
			}
		}
		// acess modify print get col get row zigzag travers
	};
	/// <summary>
	/// Summary for HillCipherGUI
	/// </summary>
	public ref class HillCipherGUI : public System::Windows::Forms::Form {
		Form^ parent;
	public:
		HillCipherGUI(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HillCipherGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &HillCipherGUI::textBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(170, 206);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(170, 258);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(170, 89);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"key";
			this->label1->Click += gcnew System::EventHandler(this, &HillCipherGUI::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"message";
			this->label2->Click += gcnew System::EventHandler(this, &HillCipherGUI::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(104, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"key";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"cipher";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(188, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Decryption";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(82, 141);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"output";
			this->label8->Click += gcnew System::EventHandler(this, &HillCipherGUI::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(188, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Encryption";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(82, 329);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"output";
			this->label10->Click += gcnew System::EventHandler(this, &HillCipherGUI::label10_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(324, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 37);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Encrypt :) ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HillCipherGUI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(324, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 39);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Decrypt :)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HillCipherGUI::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(179, 329);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 20);
			this->label11->TabIndex = 17;
			this->label11->Click += gcnew System::EventHandler(this, &HillCipherGUI::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(179, 141);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 20);
			this->label12->TabIndex = 18;
			// 
			// HillCipherGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 384);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"HillCipherGUI";
			this->Text = L"HillCipherGUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}



	   // Function to find modulo inverse of a
	   ll modinv(ll a) {
		   ll m = mody;
		   ll x, y;
		   ll g = gcdExtended(a, m, &x, &y);
		   ll res = (x % m + m) % m;
		   return res;
	   }

	   // C function for extended Euclidean Algorithm
	   ll gcdExtended(ll a, ll b, ll* x, ll* y) {
		   // Base Case
		   if (a == 0) {
			   *x = 0, * y = 1;
			   return b;
		   }
		   ll x1, y1; // To store results of recursive call
		   ll gcd = gcdExtended(b % a, a, &x1, &y1);
		   // Update x and y using results of recursive
		   // call
		   *x = y1 - (b / a) * x1;
		   *y = x1;
		   return gcd;
	   }

	   ll moddiv(ll x, ll y) {
		   ll dy = (modinv(y)) % mody;
		   return ((x * dy) % mody);
	   }

	   vector<vector<ll>> getCofactor(vector<vector<ll>> A, int p, int q, int n)
	   {
		   int nn = A.size();
		   vector<vector<ll>> v;
		   for (int i = 0; i < nn; i++) {
			   vector<ll> vv(nn, 0);
			   v.push_back(vv);
		   }
		   int i = 0, j = 0;
		   for (int row = 0; row < n; row++) {
			   for (int col = 0; col < n; col++) {
				   if (row != p && col != q) {
					   v[i][j++] = A[row][col];
					   if (j == n - 1) {
						   j = 0;
						   i++;
					   }
				   }
			   }
		   }
		   return v;
	   }
	   int determinant(vector<vector<ll>> A, int n) {
		   int nn = A.size();
		   int D = 0;
		   if (n == 1) {
			   return A[0][0];
		   }
		   int sign = 1;
		   for (int f = 0; f < n; f++) {
			   vector<vector<ll>> temp = getCofactor(A, 0, f, n);
			   D += sign * A[0][f] * determinant(temp, n - 1);
			   sign = -sign;
		   }
		   return D;
	   }

	   // Function to get adjoint of A[N][N] in adj[N][N].
	   vector<vector<ll>> adjoint(vector<vector<ll>> A) {
		   vector<vector<ll>> adj;
		   int nn = A.size();
		   for (int i = 0; i < nn; i++) {
			   vector<ll> vv(nn, 0);
			   adj.push_back(vv);
		   }
		   if (nn == 1) {
			   adj[0][0] = 1;
			   return adj;
		   }
		   int sign = 1;
		   for (int i = 0; i < nn; i++) {
			   for (int j = 0; j < nn; j++) {
				   vector<vector<ll>> temp = getCofactor(A, i, j, nn);
				   sign = ((i + j) % 2 == 0) ? 1 : -1;
				   adj[j][i] = (sign) * (determinant(temp, nn - 1));
			   }
		   }
		   return adj;
	   }

	   // Function to calculate and store inverse, returns false if
	   // matrix is singular
	   vector<vector<ll>> inverse(vector<vector<ll>> A)
	   {
		   vector<vector<ll>> inv;
		   int nn = A.size();
		   for (int i = 0; i < nn; i++) {
			   vector<ll> vv(nn, 0);
			   inv.push_back(vv);
		   }
		   int det = determinant(A, nn);
		   if (det == 0)
		   {
			   cout << "Singular matrix, can't find its inverse";
			   return inv;
		   }
		   vector<vector<ll>> adj = adjoint(A);

		   for (int i = 0; i < nn; i++) {
			   for (int j = 0; j < nn; j++) {
				   inv[i][j] = (moddiv(adj[i][j], det) + 26) % 26;
			   }
		   }
		   return inv;
	   }

	   string encrypt(string s, string k) {
		   if (k.size() != s.size() * s.size()) {
			   cout << "the key is not suitable for the given string" << endl;
		   }
		   matrix<ll> mkey(s.size(), s.size(), 0);
		   for (int i = 0; i < k.size(); i++) {
			   mkey[i / s.size()][i % s.size()] = (k[i] - 'a');
		   }
		   matrix<ll> mtext(s.size(), 1, 0);
		   for (int i = 0; i < s.size(); i++) {
			   mtext[i][0] = (s[i] - 'a');
		   }
		   if (determinant(mkey.v, mkey.v.size()) % 2 == 0 || determinant(mkey.v, mkey.v.size()) % 13 == 0) {
			   cout << "please, give an appropriate key" << endl;
			   return "NO";
		   }
		   matrix<ll> ans = mkey.modmult(mtext);
		   string  ret;
		   for (int i = 0; i < s.size(); i++) {
			   ret.push_back(ans[i][0] + 'a');
		   }
		   return ret;
	   }
	   string decrypt(string s, string k) {
		   matrix<ll> mkey(s.size(), s.size(), 0);
		   for (int i = 0; i < k.size(); i++) {
			   mkey[i / s.size()][i % s.size()] = (k[i] - 'a');
		   }
		   matrix<ll> mcipher(s.size(), 1, 0);
		   for (int i = 0; i < s.size(); i++) {
			   mcipher[i][0] = (s[i] - 'a');
		   }
		   if (determinant(mkey.v, mkey.v.size()) % 2 == 0 || determinant(mkey.v, mkey.v.size()) % 13 == 0) {
			   cout << "please, give an appropriate key" << endl;
			   return "NO";
		   }
		   auto v = inverse(mkey.v);
		   mkey.v = v;
		   matrix<ll> ans = mkey.modmult(mcipher);
		   string  ret;
		   for (int i = 0; i < s.size(); i++) {
			   ret.push_back(ans[i][0] + 'a');
		   }
		   return ret;
	   }
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	string key = marshal_as<string, String^>(textBox3->Text);

	string cipher = marshal_as<string, String^>(textBox2->Text);
	string message = decrypt(cipher, key);
	label11->Text = marshal_as<String^, string>(message);
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string key = marshal_as<string, String^>(textBox4->Text);

		string message = marshal_as<string, String^>(textBox1->Text);
		string cipher = encrypt(message, key);
		label12->Text = marshal_as<String^, string>( cipher);
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}

