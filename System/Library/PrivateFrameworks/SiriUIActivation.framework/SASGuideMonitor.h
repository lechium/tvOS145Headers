/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>

@class AFUISiriLanguage, NSDate, NSString;

@interface SASGuideMonitor : NSObject <AFUISiriLanguageDelegate> {

	AFUISiriLanguage* _language;
	NSDate* _lastAppUpdateTimestamp;
	NSDate* _lastGuideCheck;

}

@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSDate * lastAppUpdateTimestamp;                             //@synthesize lastAppUpdateTimestamp=_lastAppUpdateTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * lastGuideCheck;                                     //@synthesize lastGuideCheck=_lastGuideCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitor;
-(id)init;
-(id)_language;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)_applicationsDidChange;
-(NSDate *)lastAppUpdateTimestamp;
-(void)checkForGuideUpdatesIfNecessary;
-(void)setLastAppUpdateTimestamp:(NSDate *)arg1 ;
-(NSDate *)lastGuideCheck;
-(void)setLastGuideCheck:(NSDate *)arg1 ;
@end

