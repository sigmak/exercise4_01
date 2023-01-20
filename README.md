원문 출처 : <a href="https://www.oracle.com/webfolder/technetwork/tutorials/obe/db/dotnet/2015/getting_started_vb_version/oracle_data_provider_for_dotnet_vb_version.html#section1" target="_blank">Getting Started with Oracle Data Provider for .NET (VB.NET Version)</a>

<B>Before You Begin</B>


<B>Purpose</B>

This tutorial describes how you can build a basic Visual Basic .NET application that uses the Oracle Data Provider for .NET to access data in an Oracle Database.


<B>Time to Complete</B>

Approximately 30 minutes


<B>Background</B>

Oracle Data Provider for .NET (ODP.NET) is Oracle's high performance ADO.NET compliant data provider that exposes a complete set of Oracle specific data access features and tuning options including support for Real Application Clusters, XML DB, and advanced security.

It is available for free download from the Oracle Technology Network web site.

This tutorial will guide you through building a basic Visual Basic .NET application that retrieves data from the Oracle database.

You will learn how ODP.NET interacts with standard .NET controls.

Then, you will learn how to handle errors with ODP.NET. Lastly, you will modify the application to return multiple columns of data.

<B>What Do You Need?</B>

Before starting this tutorial, you should:

    1.Install Microsoft Visual Studio 2015 or later.
    2.Install Oracle Database 12c or later.
    3.Install Oracle Data Access Components (ODAC) 12c Release 4 or later from OTN.
      The ODAC download includes Oracle Developer Tools for Visual Studio and ODP.NET that will be used in this lab.

-----------------------------------------------------------------------------------------------------------------------------
<B>Creating a Project in Visual Studio</B>

In this section, you will create a new Visual Studio Visual Basic (VB) application.

    1.Open Visual Studio. Click File. Select New > Project.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap01_01.jpg' />


    2.Select Visual Basic > Windows > Windows Forms Application. Rename the project as VBWinApp. Click OK.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap01_02.jpg' />


    3.Observe the screen. The project VBWinApp opens up and Form1.vb displays on screen.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap01_03.jpg' />


    4.Select View > Solution Explorer.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap01_04.jpg' />

-----------------------------------------------------------------------------------------------------------------------------
<B>Adding a Reference</B>

In this section, you will add a reference to the assembly for Oracle Data Provider for .NET.

    1. From the Project menu, select Add Reference. A window opens up.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap02_01.jpg' />


    2. Select Extensions menu under Assemblies on the side bar. Scroll down the list of extensions and select Oracle.ManagedDataAccess and click OK. This is the ODP.NET, Managed Driver assembly.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap02_02.jpg' />

-----------------------------------------------------------------------------------------------------------------------------
<B>Retrieving Data from the Database</B>

To retrieve data from the database, add some controls to your form and the data access logic behind them. Perform the following steps.

    1. From View menu, select Toolbox. The Toolbox appears.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_01.jpg' />    


    2.Drag the Button control under the Common Controls in the Toolbox, to the Form1 canvas.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_02.jpg' />    
    Note: Before selecting the Toolbox, you should have the form open.


    3. From the Toolbox, drag the Label control to the Form1 canvas.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_03.jpg' />    


    4. Double-click Button1 to open the code window.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_04.jpg' />    


    5. Observe the screen. Form1.vb code window opens.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_05.jpg' />    
    
    6. Add the following VB.NET Imports statements to the Form1.vb code.

Imports System.Data

Imports Oracle.ManagedDataAccess.Client ' ODP.NET, Managed Driver

Imports Oracle.ManagedDataAccess.Types

<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_05.jpg' />    
    
    
    7. Add the following VB.NET code in the Button1_Click sub procedure.
    
       This code will connect to the HR schema, then query the DEPARTMENTS table for the DEPARTMENT_NAME with the DEPARTMENT_ID of 10.

       In this tutorial, the Data Source is the Oracle database alias, ORCL. This alias may be different from your local database server.

Dim oradb As String = "Data Source=orcl;User Id=hr;Password=hr;"

Dim conn As New OracleConnection(oradb) 

conn.Open()

Dim cmd As New OracleCommand

cmd.Connection = conn

cmd.CommandText = "select department_name from departments where department_id = 10"

cmd.CommandType = CommandType.Text

Dim dr As OracleDataReader = cmd.ExecuteReader()

dr.Read()

Label1.Text = dr.Item("department_name")

conn.Dispose()

<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_07.jpg' />    

    8. Select Build > Build OraWinApp.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_08.jpg' />    

    Note: In the output window, ensure you did not get any errors. Now you can run the form.

    9. Select Debug > Start Without Debugging.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_09.jpg' />        

   10. The Form1 form appears. Click Button1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_10.jpg' />        

   11.Observe the output. Close Form1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap03_11.jpg' />        

    Note: Since the query in the code was to show the department name for department ID of 10, the result is the Administration department.

-----------------------------------------------------------------------------------------------------------------------------
<B>Incorporating Interactive Controls</B>

You can add a text box control to accept user input for the department ID, instead of running the hard coded query. Perform the following steps.

    1. Select the Form1.vb [Design] tab. From the Toolbox, drag the TextBox control to Form1 canvas.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_01.jpg' />        

    2. Drag another Label control onto Form1 canvas, above the text box.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_02.jpg' />            

    3. Right-click Label2 and select Properties.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_03.jpg' />            

    4. In the Properties tab, change the Text property to Enter Department ID. 
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_04.jpg' />            

    5. Select the Form1.vb tab.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_05.jpg' />            

    6. Add the following code right after the conn.Open() statement in the Form1.vb code.

Dim parm As New OracleParameter

parm.OracleDbType = OracleDbType.Decimal

parm.Value = TextBox1.Text

<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_06.jpg' />            

    7. Add the following code right after the cmd.Connection = conn statement in the Form1.vb code.

cmd.Parameters.Add(parm)
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_07.jpg' />            

    8. Modify the SQL for the cmd.CommandText statement to the following SQL statement.

cmd.CommandText = "select department_name from departments where department_id = :1"
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_08.jpg' />            
    Note: You can use a bind variable to include the value of the text box as part of the SELECT statement.
    Bind variables improve performance by preventing the database from reparsing the SQL statement every time the text box value changes. 

    9. Select Build > Build VBWinApp.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_09.jpg' />            

Check in the output window for any errors reported. If no errors or warnings, proceed with the next step.

   10. Select Debug > Start Without Debugging.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_10.jpg' />            

   11. Enter 20 for the Department Id and click Button1.    
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_11.jpg' />            

   12. Observe the output. The Label1 changes to Marketing, which is the name of the Department with department ID 20.    
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_12.jpg' />            
   Note: The value of label1 varies based on the data entered in the Department ID field.

   13. Enter 300 for the Department Id and click Button1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_13.jpg' />            

   13. You receive an error because there is no department with an ID of 300. Click Quit. You can add error handling to mitigate this error output.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap04_14.jpg' />            

-----------------------------------------------------------------------------------------------------------------------------
<B>Adding Error Handling</B?

Error handling is needed to instruct the user why something does not work properly.

In this topic, you modify the code to prevent an error when an invalid Department ID is provided by adding some very simple error handling code.

For more robust error handling, Structured Exception Handling should be used.

For more information on Structured Exception Handling with ODP.NET, refer to the ODP.NET online documentation.

    1. In Form1.vb code, change the following code from:

    dr.Read()
    
    label1.Text = dr.Item("department_name")


    to

    If dr.Read() Then
    
      Label1.Text = dr.Item("department_name")
      
     Else
     
      Label1.Text = "Department ID not found"
      
     End If
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap05_01.jpg' />                 


    2. Select Build > Build VBWinApp.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap05_02.jpg' />                 
    Note: Ensure that there are no errors reported in the output window. 

    3. Select Debug > Start Without Debugging.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap05_03.jpg' />                 

    4. Enter 300 for the Department ID and click button1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap05_04.jpg' />                 

    5. Observe the output. The message Department ID not found is displayed. Close Form1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap05_05.jpg' />                 

-----------------------------------------------------------------------------------------------------------------------------
<B>Retrieving Multiple Columns and Rows</B?

In this section, you will retrieve more than one column of information, displaying the data in a listbox.

The new query will be a join of the DEPARTMENTS and LOCATIONS tables.

The query will return all the department IDs, the department names, and their locations.

The department names and their respective locations will then be displayed.

    1. Go to Form1.vb [Design] tab. From the Toolbox, drag the ListBox control to the Form1.vb canvas.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_01.jpg' />                 

    2. The new listbox appears on the form. You can position and re-size the listbox appropriately. Click Form1.vb tab.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_02.jpg' />                 

    3. Comment out the cmd.Parameters.Add(parm) statement in the Form1.vb code.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_03.jpg' />                 

    4. Modify the SQL for the cmd.CommandText statement to the following SQL.
cmd.CommandText = "select department_id, department_name, city" +

" from departments d, locations l" +

" where d.location_id = l.location_id"    

<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_04.jpg' />                 


    5. In Form1.vb code, change the following code from:

If dr.Read() Then

  Label1.Text = dr.Item("department_name")
  
 Else
 
  Label1.Text = "Department ID not found"
  
End If 


to

While dr.Read()

 ListBox1.Items.Add("The " + dr.Item(1) +
 
 " department is in " + dr.Item("city"))
 
End While

<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_05.jpg' />                 

    6. Select Build > Build VBWinApp.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_06.jpg' />                 


    7. Select Debug > Start Without Debugging.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_07.jpg' />                 

    8. Click Button1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_08.jpg' />                 


    9. Observe the output. The list of all the departments and their locations is shown. Close Form1.
<img src='https://github.com/sigmak/exercise4_01/blob/2023-01-20_vb-net_oracle-Data-Provider/snap06_09.jpg' />                 

     
     
