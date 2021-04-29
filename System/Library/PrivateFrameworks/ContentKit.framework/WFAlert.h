/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFAlertPresenter;
@class NSString, WFTextFieldConfiguration, WFDatePickerConfiguration, NSArray, NSDate, NSMutableArray, WFAlertButton, NSError;

@interface WFAlert : NSObject {

	BOOL _prefersItemPickerSheetPresentation;
	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	WFTextFieldConfiguration* _textFieldConfiguration;
	WFDatePickerConfiguration* _datePickerConfiguration;
	NSArray* _textFieldResults;
	NSDate* _datePickerResult;
	id<WFAlertPresenter> _presenter;
	NSMutableArray* _mutableButtons;
	NSMutableArray* _mutableTextFieldConfigurationHandlers;
	unsigned long long _dialogAttributionMode;

}

@property (nonatomic,readonly) WFAlertButton * escapeButton; 
@property (assign,nonatomic,__weak) id<WFAlertPresenter> presenter; 
@property (nonatomic,readonly) NSArray * textFieldConfigurationHandlers; 
@property (nonatomic,readonly) NSError * associatedError; 
@property (assign,nonatomic,__weak) id<WFAlertPresenter> presenter;                               //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableButtons;                                     //@synthesize mutableButtons=_mutableButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTextFieldConfigurationHandlers;              //@synthesize mutableTextFieldConfigurationHandlers=_mutableTextFieldConfigurationHandlers - In the implementation block
@property (assign,nonatomic) BOOL prefersItemPickerSheetPresentation;                             //@synthesize prefersItemPickerSheetPresentation=_prefersItemPickerSheetPresentation - In the implementation block
@property (assign,nonatomic) unsigned long long dialogAttributionMode;                            //@synthesize dialogAttributionMode=_dialogAttributionMode - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                            //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) WFTextFieldConfiguration * textFieldConfiguration;                   //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,retain) WFDatePickerConfiguration * datePickerConfiguration;                 //@synthesize datePickerConfiguration=_datePickerConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * textFieldResults;                                            //@synthesize textFieldResults=_textFieldResults - In the implementation block
@property (nonatomic,copy) NSDate * datePickerResult;                                             //@synthesize datePickerResult=_datePickerResult - In the implementation block
+(id)alertWithPreferredStyle:(long long)arg1 ;
+(id)alertWithError:(id)arg1 confirmationHandler:(/*^block*/id)arg2 ;
+(id)alertWithError:(id)arg1 ;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)addButton:(id)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(id<WFAlertPresenter>)presenter;
-(void)setPresenter:(id<WFAlertPresenter>)arg1 ;
-(long long)preferredStyle;
-(void)setPrefersItemPickerSheetPresentation:(BOOL)arg1 ;
-(NSArray *)textFieldResults;
-(NSDate *)datePickerResult;
-(void)setTextFieldConfiguration:(WFTextFieldConfiguration *)arg1 ;
-(void)setDatePickerConfiguration:(WFDatePickerConfiguration *)arg1 ;
-(WFAlertButton *)escapeButton;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFTextFieldConfiguration *)textFieldConfiguration;
-(WFDatePickerConfiguration *)datePickerConfiguration;
-(void)setTextFieldResults:(NSArray *)arg1 ;
-(void)setDatePickerResult:(NSDate *)arg1 ;
-(NSMutableArray *)mutableButtons;
-(void)setMutableButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTextFieldConfigurationHandlers;
-(void)setMutableTextFieldConfigurationHandlers:(NSMutableArray *)arg1 ;
-(BOOL)prefersItemPickerSheetPresentation;
-(unsigned long long)dialogAttributionMode;
-(void)setDialogAttributionMode:(unsigned long long)arg1 ;
-(NSArray *)textFieldConfigurationHandlers;
-(NSError *)associatedError;
@end
