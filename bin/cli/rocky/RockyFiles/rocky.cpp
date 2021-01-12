//
// Created by seymo on 1/11/2021.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <windows.h>
#include <string>

using namespace std;
//                                      THE EXCLAMATION LANG LICENCE
//                                     Kai-Builder, 2019 - 2021
//                        (licence only applies to this module, DM to get in touch!)
//
//       This software/Language Is Software Build On Kai-Builder's Technology (https://www.github.com/Kai-Builder),
//              And Is Hereby Granted Modifiable, And Granted with Permission and Feel that The Entity
//              That Possesses this Software is Eligible And/Must Follow the Terms Below. If the Possessor
//              Fails to Comply with the Set of Rules, It may result in Penalties.
//
//
//
//                                     REUSING, REPUBLISHING, REDOING
//                                     (applicable to EXCLA Software.)
//              Exclamation Technologies Owns All Rights For Any Software Regarding It, Defining The Right
//              For The Consumer To Use This software With Modification Without Penalty. The Entity (you)
//              Has these Rules AND Rights By Default Once Downloaded (via github Clone OR github ZIP) onto
//              The Host's Machine. Code Used In This Repository OR Any other Repository (owned by Excla-Tech)
//              Is Free-To-Use And Free of Penalty If The Entity (you) Is Following the Terms And Conditions.
//              This Licence is Open-Sourced And Easy to apply to Exclamation Modules Only. If Any git Hosting
//              Service Is Found Hosting A repository WITHOUT Right Of Additional Licence, Consequences May Take
//              Action. This Software Is Granted With the Assumption The User Does not;
//
//              - Remake the Software With a Licence (Not Verified)
//              - Claim that They have (created) or (built) This App.
//              - Steal This Licence without Permission OR Project Meets Requirements. See Line 6. Of REUSING REPUBLISHING REDOING
//
//                                   CONTACTING, LICENCING, COPYING
//                               (applicable to modules & EXCLA Software)
//       Following all Rules From REUSING REPUBLISHING REDOING, Getting in Contact With Exclamation Tech Allows Users To Gain
//       Access To Special Licences And Perks For Software. Exclamation Is A Non-Profit Project Targeted Towards Making
//       Programming Easier. Excla Tries to maintain a Nice Friendly environment for everybody to learn code. Better, Together.
//       Systems And Tech Founded By Excla Are Granted Instantaneous Right To THIS Licence For Protection And A Fun time.
//       While The Exclamation Foundation Is open-sourced, DO NOT:
//
//              - Make Unnecessary Forks/Pull Requests
//              - Swear
//              - Be Mean, Maintain Very Bad Energy.
//
//
//
//
//                                FINAL WORDS AND CREDIT
//                   Kai-Builder || Creation Of the EXCLICENCE & Open-Sourced Dev.
//
//                   Kai-Builder || Creation Of This Project. Maker.






static void terminal() {
    cout << "Running Rocky CLI 1.6" << endl;
    std::string arg1(_argv[1]);
    if (arg1 == "--help" || arg1 == "list") {
        cout << "Rocky Is The Exclamation External Parser." << endl;
        cout << "Basic CLI Arguments:" << endl;
        cout << "--help | --import | --install | --installexternal | --getfromlink" << endl;
        cout << "Parameter Arguments:" << endl;
        cout << "--install <mod> | --import <link> | --installexternal <link> | --getfromlink <link>" << endl;
        cout << "--info <x> OR --info | -deb | --str | --exclamation" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << "                        COMMAND INFORMATION" << endl;
        cout << "--import Imports a Custom LINK Directory. (https) (UNSAFE)" << endl;
        cout << "--install Installs a Official Exclamation Approved Module." << endl;
        cout << "--getfromlink Same As Import. Imports a custom Link Directory. (https) (UNSAFE)" << endl;
        cout << "" << endl;
        cout << "If you're Inside of the BIN Directory Or you have It Set to PATH Env, Start Every Command with rocky!"
             << endl;
    } else if (arg1 == "--import") {
        string MODULE(_argv[2]);
        system(("git clone " + MODULE).c_str());
    } else if (arg1 == "--install") {
        string MODULE(_argv[2]);
        system(("git clone https://www.github.com/Kai-Builder/" + MODULE).c_str());
    } else if (arg1 == "--installexternal") {
        string MODULE(_argv[2]);
        system(("git clone https://www.github.com/" + MODULE).c_str());
    } else if (arg1 == "--getfromlink") {
        string MODULE(_argv[2]);
        system(("git clone " + MODULE).c_str());
    } else if (arg1 == "--info" || arg1 == "info") {
        string styp(_argv[2]);
        if (styp.empty()) {
            cout << "Empty Parameter." << endl;
            cout << "WARNING:1929 Define Parameter In --info To Look For." << endl;
            cout
                    << "Rocky Is a Simpler, Easier to Use Alternative to ldip.exe Which Has More Install Support for Other Web APIs."
                    << endl;
            cout << "Rocky allows for User Custom API Via RockyConfig Language." << endl;
            cout << "The Websites Provided Must Contain A Installation Method For Rocky To Execute." << endl;
            cout << "Rocky Requires git bash And Python 3.9 To Be Installed." << endl;
            cout << "For Offline Downloads & Parsing Use --installer <module>" << endl;
            throw "ERR:2010: Logic Error While Parsing NULL parameter";
        } else {
            if (styp == "-webapis") {
                cout << "Rocky Supports These Web APIs & Package Managers" << endl;
                cout << "(this list goes from most support to least)" << endl;
                cout << "- Github.com" << endl;
                cout << "- Gitlab" << endl;
                cout << "- BitBucket" << endl;
                cout << "External Git Hosting Servers:" << endl;
                cout
                        << "A2Hosting provides paid Git hosting over SSH. Hosted on high-performance SwiftServer platform. Also features SSDs with page loads up to 300% faster than standard drives. Also offers VPS Hosting.\n"
                           "Assembla provides paid plans for git/svn/p4 hosting and other project management tools with 14 day trial.\n"
                           "Beanstalk A free private Git and Subversion hosting. Integrates with Basecamp, Lighthouse, Zendesk, Harvest, Twitter, Campfire, Freckle, Fogbugz, supports Web hooks. Can deploy your files on each commit to FTP/SFTP server. Has ability to browse source, history; add comments on commits.\n"
                           "BerliOS provides Git hosting for open source projects, including gitweb. See documentation\n"
                           "CiviHosting has Git hosting on shared and VPS hosting, including SSH, SSL and 24/7 support.\n"
                           "CloudForge Application Lifecycle Management platform with Git and SVN hosting.\n"
                           "Codebase is a Git hosting service with full online source browser, changeset viewer, deployment tracking, along with ticketing and other project management functionality. Designed for private/company projects.\n"
                           "Drew Blas on Codebase and Github\n"
                           "Codeberg is a Non-Profit Collaboration Community for Free and Open Source Projects built around Gitea as a git hosting service. It is maintained by German Codeberg e. V. association.\n"
                           "Codesion Enterprise Git and Subversion hosting, and Software project management. Includes free and open source plans since 2002.\n"
                           "GerritForge is a code review service, that can also host your Git repository. An open source plan is available for free.\n"
                           "GitHub is public Git hosting site for both public, open source projects and private, proprietary codes. GitHub is not open source. Free accounts (applicable to Open Source projects) have a soft limit of 1GB per repository. Also, if the original author chooses to remove her account, it also takes out all the repositories created by her.\n"
                           "Rails on the Run - How to use github and submit a patch\n"
                           "GitHub: My Kind of Social Software by Ryan Tomayko\n"
                           "Git and GitHub on RailsTips by John Nunemaker\n"
                           "Paul Dowman » Blog Archive » Got Git (why people chose GitHub).\n"
                           "GitLab.com is a Git hosting site for both public and private projects. GitLab.com is based on the open source GitLab project but it runs the proprietary GitLab Enterprise Edition that offers a few extra features. It is completely free to use with unlimited repo's and collaborators but if you want dedicated email support you need to get a subscription.\n"
                           "Gitorious was the second largest public git hosting service and closed its doors in 2014, but is still providing a mirror of all the public repositories. Its aim was to provide a way of doing distributed opensource code collaboration. Gitorious engine, which also provides web interface for Git repositories, is opensource too. Written by Johan Sørensen, in Ruby (Ruby on Rails, Mongrel)\n"
                           "Google Code. Project Hosting on Google Code provides a free collaborative development environment for open source projects. Each project comes with its own member controls, Subversion/Mercurial/Git repository, issue tracker, wiki pages, and downloads section.\n"
                           "Helix TeamHub Used to be Deveo before acquired by Perforce and renamed to Helix TeamHub. Provides Git, Mercurial, and Subversion hosting, and can be installed on premises or used as a hosted service. Provides role-based access control with LDAP/AD integration, company and project level repository grouping, bot accounts, and a well thought-out web-based management UI with code browsing. All repositories are private. Unlimited projects and repositories. Free for 5 collaborators.\n"
                           "Innova Host provides Git hosting service in Brazil that include SSH, SSL and 24/7 support.\n"
                           "MilesWeb.com provides Git hosting service in India, USA, UK & Romania. Git is installed by our system admins on customer request on the VPS & Dedicated Server hosting.\n"
                           "Pikacode, public GIT and Mercurial hosting site for open source, private and commercial projects. Include free and paid plans with unlimited collaborators featuring code hosting, bugtracker and website hosting powered with GIT or Mercurial. SSL for everything, backup, independent hosting, data located in Europe.\n"
                           "ProjectLocker offers Git hosting and integration with Trac. Repositories are private, designed for businesses. Free plans give limited space and users, and paid plans offer increased storage capacity and number of users.\n"
                           "ProjectHut.com Provides private Git and SVN hosting with integrated Trac bug/issue tracking, project management and Wiki. Includes WebDAV file sharing facilities, hourly backups and fine-grained user/group permissions.\n"
                           "repositoryhosting.com one flat price of $6/month, 2GB of space (WebDAV + repo), Trac project management, fully customizable, regular encrypted backups to EC2\n"
                           "RocketGit offers Git hosting, bug tracker, Continuous Integration & Deployment, powerful rights management and anonymous contributions. It is the only (AFAIK) AGPLv3+ on the market, after Gitorious was acquired.\n"
                           "RoseHosting offers paid, private Git hosting on SSD-powered Linux servers. The hosting plans are fully-managed and have free 24/7 support that can help you install and configure Git. Free backups, free monitoring and free migration included.\n"
                           "repo.or.cz, public Git hosting site, maintained by Petr Baudis but slowly transferring to team of volunteers. Very basic custom web interface for creating or forking projects, uses gitweb with custom modifications as web interface. The first public Git hosting site\n"
                           "Savannah (gitweb) is hosting facility for GNU software, with companion site savannah.nongnu.org for hosting Free Software. Savannah uses clean-up branch of Savane, which does have Git support\n"
                           "See also: UsingGit (user) documentation.\n"
                           "SourceRepo provides paid Git hosting along with Trac project management.\n"
                           "SourceForge.JP provides Git hosting for open source projects, including gitweb. See documentation\n"
                           "SourceForge.net software development site\n"
                           "SSHControl.com provides public free and paid Git, Subversion, and Mercurial project hosting over SSH.\n"
                           "TuxFamily (gitweb) is hosting facility for FLOSS software (software with libre license, for example GPL, BSD, CC-BY-SA, Art Libre,...). Includes support for Git repositories. Moderators speak English, French and Spanish.\n"
                           "See also: GIT/En (in English) and GIT/Fr (in French) wiki pages.\n"
                           "Unfuddle (Software Project Management: Git and Subversion Hosting), free (or different payment plans) but not open source.\n"
                           "Visual Studio Team Services provides Git hosting for unlimited private code repositories for up to 5 users free. Paid plans are available for larger teams. VSTS also includes agile project management capabilities with unlimited stakeholders free, and cloud-hosted builds for supported project types. Not limited to projects for the Microsoft platform. Includes a free client for Windows, Mac, and Linux to access the service.\n"
                           "XP-Dev.com Provides Git hosting along with Trac project management. Integrates with various other bug/project tracking tools like Fogbugz, Lighthouse & Basecamp. Includes double backups: real-time and nightly offsite backups.\n"
                           "Project specific Git hosting sites\n"
                           "Kernel.org (gitweb) for Linux kernel related projects. Uses gitweb fork with caching support.\n"
                           "Kernel.org accounts are not given away very often, usually you need to be making some reasonable amount of contributions to the Linux kernel and have a good reason for wanting / needing an account.\n"
                           "Freedesktop.org (cgit), for X Window System desktop (Linux desktop infrastructure) related projects. Registering is managed by adding project registering request in Bugzilla.\n"
                           "See also: Infrastructure/git (formerly UsingGit) page on freedesktop.org wiki.\n"
                           "Alioth (gitweb) is a free software hosting system managed by the Debian project, which runs a slightly modified version of the GForge software. Most of the projects hosted by Alioth are packaging existing software in the Debian format.\n"
                           "See also:\n"
                           "Alioth/Git page on Debian Wiki\n"
                           "Roland weblog - Bits about Alioth (description)\n"
                           "Debian Weekly News #34 - August 22nd, 2006 (announcement)\n"
                           "Fedora Hosted is a Fedora Project-sponsored way for developers to host their code and collaborate online. It provides each project with source control via git, Mercurial, bzr, and others, as well as a bug tracker and wiki via Trac. New project requests must be filled via Fedora Inftastructure Trac instance. (Primarily Fedora related but open to other Free software projects too).\n"
                           "git.debian.org provides Git hosting for maintainers of Debian packages.\n"
                           "RubyForge is a home for open source Ruby projects. RubyForge Git repositories are managed via gitosis; gitosis does authentication via public keys. RubyForge is based on GForge engine.\n"
                           "See:\n"
                           "Git for Rubyforge accounts post on Dr Nic blog.\n"
                           "http://git.postgresql.org/ provides Git hosting for PostgreSQL and related projects.\n"
                           "SaaS-Secure.com Project Management with Git and Subversion Hosting. Free or professional payment plans with Redmine.\n"
                           "Other links\n"
                           "12 Git Hosting Services Compared by Git tower.\n"
                           "Comparison of source code hosting facilities at Wikipedia.\n"
                           "A comparison of free and paid Git hosting" << endl;
                cout << "<<||| END LINE |||>>" << endl;
            } else if (styp == "-aff" || styp == "-affiliations") {
                cout << "OFFICIALLY CONFIRMED AFFILIATIONS\n"
                        "\n"
                        "Roe's Command Prompt. Roe's Command Prompt Is a Windows Terminal Based Python Runtime Available For Windows.\n"
                        "Reeve Framework. Reeve Framework Is a Framework To Build Applications\n"
                        "R#. R# Is a Light Compiler Based Language which runs On Windows, mac, And Linux.\n"
                        "EXCLAMAKE. Exclamake Is a Project Manager And Source Builder For Exclamation." << endl;
            } else if (styp == "-framework" || styp == "-fw") {
                cout << "The Open Source Framework Is Not Yet Available. This Prompt Is Read-Only." << endl;
            } else if (styp == "?" || styp == "/H" || styp == "/HELP" || styp == "/help" || styp == "help") {
                cout << "INFORMATION" << endl;
                cout << "The Information Parameter (--info) Gives Information On a specific Component." << endl;
            }
        }
    } else if (arg1 == "-contacts") {
        cout << "DISCORD@float#5000" << endl;
        cout << "WEB@rockybash.net" << endl;
    } else if (arg1 == "-language") {
        cout << "LANGUAGES ROCKY USES" << endl;
        cout << "Python\nC++\nC" << endl;
        cout << "Languages Rocky Supports" << endl;
        cout << "JavaScript\nExclamationLanguage" << endl;
    } else if (arg1 == "-init") {
        cout << "Initial Setup" << endl;
        cout << "Tasks:" << endl;
        cout << "- Create RockyConfig" << endl;
        cout << "- Edit RockyConfig" << endl;
        cout << "- Add Rocky Support Files" << endl;
        cout << "- Run Tests Scripts (EXCLA)" << endl;
        Sleep(2000);
        cout << "Creating Test Script." << endl;
        ofstream ifil("BUILD_OUT.cxx");
        ifil << "//\n"
                "// ROCKY GENERATED SCRIPT\n"
                "//\n"
                "\n"
                "// Insert Basic Definitions\n"
                "\n"
                "#include <string>\n"
                "#include <iostream>\n"
                "\n"
                "#define                                         COMPILER_ID                                         102009208\n"
                "\n"
                "#define                                         FILE_EXT                                            \".excla\"\n"
                "\n"
                "#define                                         FILE_EXPORTER                                       \".exclaport\"\n"
                "\n"
                "#define                                         CXX_OBJECT                                              1\n"
                "\n"
                "/*\n"
                " * Initialize Some basic Static Definitions\n"
                " */\n"
                "\n"
                "void C_ARG();\n"
                "\n"
                "void CXX_OBJECT_CATCH();\n"
                "\n"
                "void NEW_OB();\n"
                "\n"
                "void EXCLA_ARG();\n"
                "\n"
                "#define                                          newarg(x, kwf)                                          C_ARG(x, kwf)\n"
                "\n"
                "#define                                          _catch(x)                                          CXX_OBJECT_CATCH(x)\n"
                "\n"
                "#define                                          NEW(x)                                              NEW_OB(x)\n"
                "\n"
                "#define                                          EARG(x)                                             EXCLA_ARG(x)\n"
                "\n"
                "using namespace std;\n"
                "\n"
                "string xf;\n"
                "string kw;\n"
                "\n"
                "/*\n"
                " * OBJECT KEYMAPPING\n"
                " * Object Keymaps Begin with .objk\n"
                " * Creation of Arguments Through #define\n"
                " */\n"
                "\n"
                "void C_ARG(const std::string &ARG, const string &KWORDS) {\n"
                "    // Create a Sample Throwaway Figure\n"
                "    std::cin >> xf;\n"
                "    if (xf == KWORDS) {\n"
                "        abort(); // Return\n"
                "    }\n"
                "    else {\n"
                "        cout << \"Argument Code Success\" << endl;\n"
                "    }\n"
                "}" << endl;
        ifil.close();
        Sleep(1000);
        cout << "Successfully Loaded Test Script." << endl;
        Sleep(5000);
        cout << "Adding RockyConfig" << endl;
        ofstream ifile(".rockyconfig");
        ifile << "!rocky path %%DEFAULT%%\n!rocky set default main -> init\n#buff overload 1000\n#p end\n" << endl;
        ifile.close();
        Sleep(3000);
        cout << "Created RockyConfig" << endl;
        Sleep(3000);
    }


}

int main(int argc, char *argv[]) {
    // TERMINAL_INIT
    terminal();
}