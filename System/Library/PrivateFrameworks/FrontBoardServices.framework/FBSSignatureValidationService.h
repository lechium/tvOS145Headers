/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSApplicationTrustDataProvider.h>

@protocol _FBSMISInterfaceWrapper;
@class NSString;

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {

	id<_FBSMISInterfaceWrapper> _misInterfaceWrapper;
	BOOL _authoritative;

}

@property (assign,nonatomic) BOOL authoritative;                    //@synthesize authoritative=_authoritative - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)trustStateForApplication:(id)arg1 ;
-(unsigned)signatureVersionForApp:(id)arg1 ;
-(id)_initWithMISInterfaceWrapper:(id)arg1 ;
-(unsigned long long)_validateApp:(id)arg1 ;
-(void)_logTrustState:(unsigned long long)arg1 forApp:(id)arg2 reason:(id)arg3 ;
-(BOOL)authoritative;
-(void)setAuthoritative:(BOOL)arg1 ;
@end

