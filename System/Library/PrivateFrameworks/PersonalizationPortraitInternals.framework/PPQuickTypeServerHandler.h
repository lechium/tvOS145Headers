/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPQuickTypeServerProtocol.h>

@interface PPQuickTypeServerHandler : NSObject <PPQuickTypeServerProtocol>
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
@end

