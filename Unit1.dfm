object Form1: TForm1
  Left = 411
  Top = 154
  BorderStyle = bsDialog
  Caption = #1055#1057' '#1056#1057#1057
  ClientHeight = 839
  ClientWidth = 1115
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 8
    Width = 225
    Height = 833
    TabOrder = 0
    object Button1: TButton
      Left = 16
      Top = 24
      Width = 202
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1057#1062
      TabOrder = 0
      OnClick = Button1Click
    end
    object Panel3: TPanel
      Left = 16
      Top = 55
      Width = 202
      Height = 122
      TabOrder = 1
      object Label1: TLabel
        Left = 16
        Top = 10
        Width = 122
        Height = 16
        Caption = #1041#1083#1086#1082' '#1089#1086#1077#1076#1080#1085#1077#1085#1080#1103' '#1057#1062
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object SpinEdit1: TSpinEdit
        Left = 36
        Top = 32
        Width = 145
        Height = 22
        MaxValue = 0
        MinValue = 0
        TabOrder = 0
        Value = 0
      end
      object SpinEdit2: TSpinEdit
        Left = 36
        Top = 60
        Width = 145
        Height = 22
        MaxValue = 0
        MinValue = 0
        TabOrder = 1
        Value = 0
      end
      object Button2: TButton
        Left = 36
        Top = 88
        Width = 145
        Height = 25
        Caption = #1057#1086#1077#1076#1080#1085#1080#1090#1100
        TabOrder = 2
        OnClick = Button2Click
      end
    end
    object Panel4: TPanel
      Left = 16
      Top = 183
      Width = 202
      Height = 174
      TabOrder = 2
      object Label2: TLabel
        Left = 8
        Top = 40
        Width = 161
        Height = 13
        Caption = #1053#1086#1084#1077#1088' '#1057#1062' '#1089#1084#1077#1085#1099' '#1082#1086#1101#1092#1092#1080#1094#1080#1077#1085#1090#1072
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label3: TLabel
        Left = 8
        Top = 86
        Width = 103
        Height = 13
        Caption = #1042#1074#1086#1076' '#1082#1086#1101#1092#1092#1080#1094#1080#1077#1085#1090#1072
      end
      object Label4: TLabel
        Left = 16
        Top = 10
        Width = 165
        Height = 16
        Caption = #1041#1083#1086#1082' '#1091#1089#1090#1072#1085#1086#1074#1083#1077#1085#1080#1103' '#1074#1077#1089#1072' '#1057#1062
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object ComboBox1: TComboBox
        Left = 36
        Top = 59
        Width = 145
        Height = 21
        TabOrder = 0
      end
      object Edit1: TEdit
        Left = 36
        Top = 105
        Width = 145
        Height = 21
        TabOrder = 1
      end
      object Button3: TButton
        Left = 36
        Top = 132
        Width = 145
        Height = 25
        Caption = #1059#1089#1090#1072#1085#1086#1074#1080#1090#1100
        TabOrder = 2
        OnClick = Button3Click
      end
    end
    object Panel5: TPanel
      Left = 16
      Top = 363
      Width = 202
      Height = 134
      TabOrder = 3
      object Label5: TLabel
        Left = 16
        Top = 8
        Width = 135
        Height = 16
        BiDiMode = bdLeftToRight
        Caption = #1041#1083#1086#1082' '#1086#1073#1088#1072#1073#1086#1090#1082#1080' '#1051#1057' '#1057#1062
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentBiDiMode = False
        ParentFont = False
      end
      object Label6: TLabel
        Left = 8
        Top = 46
        Width = 152
        Height = 13
        Caption = #1042#1099#1073#1086#1088' '#1085#1086#1084#1077#1088#1072' '#1057#1062' '#1076#1083#1103' '#1088#1072#1073#1086#1090#1099
      end
      object ComboBox2: TComboBox
        Left = 36
        Top = 65
        Width = 145
        Height = 21
        TabOrder = 0
      end
      object Button4: TButton
        Left = 36
        Top = 92
        Width = 145
        Height = 25
        Caption = #1054#1090#1082#1088#1099#1090#1100
        TabOrder = 1
        OnClick = Button4Click
      end
    end
    object Panel6: TPanel
      Left = 16
      Top = 600
      Width = 202
      Height = 105
      TabOrder = 4
      object Label7: TLabel
        Left = 19
        Top = 32
        Width = 145
        Height = 18
        Caption = #1063': 0 '#1052#1080#1085'.: 0 '#1057#1077#1082'.: 0'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clGreen
        Font.Height = -15
        Font.Name = 'Tahoma'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
      end
      object Button5: TButton
        Left = 12
        Top = 72
        Width = 75
        Height = 25
        Caption = #1057#1090#1072#1088#1090
        TabOrder = 0
        OnClick = Button5Click
      end
      object Button6: TButton
        Left = 110
        Top = 72
        Width = 75
        Height = 25
        Caption = #1057#1090#1086#1087
        TabOrder = 1
        OnClick = Button6Click
      end
    end
    object Panel7: TPanel
      Left = 16
      Top = 503
      Width = 202
      Height = 91
      TabOrder = 5
      object Label8: TLabel
        Left = 23
        Top = 0
        Width = 151
        Height = 13
        Caption = #1050#1086#1101#1092'. '#1085#1072#1076#1105#1078#1085#1086#1081' '#1088#1072#1073#1086#1090#1099' '#1089#1077#1090#1080
      end
      object Edit2: TEdit
        Left = 23
        Top = 19
        Width = 158
        Height = 21
        TabOrder = 0
        Text = '0'
      end
      object Button7: TButton
        Left = 23
        Top = 46
        Width = 158
        Height = 25
        Caption = #1086#1073#1085#1086#1074#1080#1090#1100
        TabOrder = 1
        OnClick = Button7Click
      end
    end
  end
  object Panel2: TPanel
    Left = 224
    Top = 8
    Width = 892
    Height = 833
    BorderStyle = bsSingle
    Color = clWindow
    ParentBackground = False
    TabOrder = 1
    object Image1: TImage
      Left = -2
      Top = -2
      Width = 923
      Height = 835
      OnMouseDown = Image1MouseDown
    end
  end
end
