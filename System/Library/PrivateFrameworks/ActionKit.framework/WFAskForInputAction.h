/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction {

	long long _datePickerMode;

}

@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSString * promptText; 
@property (nonatomic,readonly) NSString * defaultAnswer; 
@property (nonatomic,readonly) long long datePickerMode;                            //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,readonly) BOOL immediatelyActivateWatchDictation; 
-(NSString *)inputType;
-(long long)datePickerMode;
-(NSString *)promptText;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldCreateIntentAvailableResource;
-(id)outputContentClasses;
-(NSString *)defaultAnswer;
-(BOOL)immediatelyActivateWatchDictation;
-(id)datePickerModeFromInputType:(id)arg1 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(void)finishRunningWithResultText:(id)arg1 ;
-(void)finishRunningWithDate:(id)arg1 ;
@end

