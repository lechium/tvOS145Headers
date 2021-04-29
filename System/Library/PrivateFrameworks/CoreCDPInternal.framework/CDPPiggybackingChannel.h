/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPSecureChannelProxy.h>

@class CDPContext, NSString;

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy> {

	CDPContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)sendPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)approverBackupRecordsExist;
-(unsigned long long)approveriCloudKeychainState;
-(id)_replyContextWithPakeData:(id)arg1 ;
@end

