object Form3: TForm3
  Left = 411
  Top = 231
  BorderStyle = bsDialog
  Caption = #1041#1083#1086#1082' '#1086#1073#1088#1072#1073#1086#1090#1082#1080' '#1083#1080#1095#1085#1086#1075#1086' '#1089#1086#1089#1090#1072#1074#1072' '#1074#1099#1073#1088#1072#1085#1085#1086#1075#1086' '#1057#1062
  ClientHeight = 508
  ClientWidth = 735
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1134
    Height = 717
    TabOrder = 0
    object Image1: TImage
      Left = 0
      Top = 0
      Width = 738
      Height = 511
      Stretch = True
    end
    object StringGrid1: TStringGrid
      Left = 16
      Top = 24
      Width = 345
      Height = 257
      ColCount = 3
      Ctl3D = True
      RowCount = 10
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      ParentCtl3D = False
      TabOrder = 0
    end
    object Panel2: TPanel
      Left = 384
      Top = 24
      Width = 345
      Height = 257
      Color = clWindow
      ParentBackground = False
      TabOrder = 1
      object Label1: TLabel
        Left = 159
        Top = 101
        Width = 37
        Height = 16
        Caption = 'Label1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 159
        Top = 17
        Width = 37
        Height = 16
        Caption = 'Label2'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label3: TLabel
        Left = 159
        Top = 61
        Width = 37
        Height = 16
        Caption = 'Label3'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label4: TLabel
        Left = 159
        Top = 141
        Width = 37
        Height = 16
        Caption = 'Label1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Label5: TLabel
        Left = 159
        Top = 181
        Width = 37
        Height = 16
        Caption = 'Label1'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
      end
      object Button1: TButton
        Left = 8
        Top = 98
        Width = 137
        Height = 25
        Caption = #1055#1088#1086#1074#1077#1088#1082#1072' '#1094#1077#1083#1086#1089#1090#1085#1086#1089#1090#1080
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 8
        Top = 14
        Width = 137
        Height = 25
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1095#1077#1083#1086#1074#1077#1082#1072
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button3: TButton
        Left = 8
        Top = 58
        Width = 137
        Height = 25
        Caption = #1059#1076#1072#1083#1080#1090#1100' '#1095#1077#1083#1086#1074#1077#1082#1072
        TabOrder = 2
        OnClick = Button3Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 666
    Top = 216
  end
end
