#include<bits/stdc++.h>
using namespace std;
void cf(const string& source,const string& destination)
{
    ifstream sourcefile(source,ios::binary);
    ofstream destinationfile(destination,ios::binary);
    destinationfile<<sourcefile.rdbuf();
    sourcefile.close();
    destinationfile.close();

}
int  main()
{
    vector <string> tf={" version1.txt"," version2.txt"};
    do
    {
        string c;
        cout<<" Would you like to commit or exit "<<endl;
        cin>>c;
        if(c=="commit")
        {
            time_t curtime=time(0);
            string vt=to_string(curtime);
            string verdir=" versions/ "+vt;
            for(const string& file:tf)
            {
                cf(file,verdir+" /"+file);

            }
            cout<<" A new version has been committed! "<<vt<<endl;
        }
        else if(c==" exit ")
        {
            break;
        }
        else
        {
            cout<<" Your command is not valid! "<<endl;
        }
    }
    while(true);
}