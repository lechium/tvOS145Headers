/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailServices/MSMailDefaultService.h>

@interface MSSendEmail : MSMailDefaultService
+(id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

