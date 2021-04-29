/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKVDonatorProvider.h>

@protocol OS_dispatch_queue, CKVDonateServiceProvider, CKVDonateAuthorization;
@class NSObject;

@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {

	NSObject*<OS_dispatch_queue> _donatorQueue;
	NSObject*<CKVDonateServiceProvider> _serviceProvider;
	NSObject*<CKVDonateAuthorization> _authorization;

}
+(id)sharedDonatorFactory;
-(id)init;
-(id)initWithQueue:(id)arg1 serviceProvider:(id)arg2 authorization:(id)arg3 ;
-(id)makeDonatorForOriginApp:(id)arg1 ;
@end
