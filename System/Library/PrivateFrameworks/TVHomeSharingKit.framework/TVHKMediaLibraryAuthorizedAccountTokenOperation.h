/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaLibraryRequestOperation.h>

@class NSNumber, NSData, TVHKFairPlaySAPContext;

@interface TVHKMediaLibraryAuthorizedAccountTokenOperation : TVHKMediaLibraryRequestOperation {

	BOOL _useTokenEncryption;
	NSNumber* _tokenStatus;
	NSData* _tokenData;
	TVHKFairPlaySAPContext* _fairPlaySAPContext;

}

@property (nonatomic,copy) NSNumber * tokenStatus;                                     //@synthesize tokenStatus=_tokenStatus - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                         //@synthesize tokenData=_tokenData - In the implementation block
@property (nonatomic,retain) TVHKFairPlaySAPContext * fairPlaySAPContext;              //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
@property (assign,nonatomic) BOOL useTokenEncryption;                                  //@synthesize useTokenEncryption=_useTokenEncryption - In the implementation block
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(TVHKFairPlaySAPContext *)fairPlaySAPContext;
-(void)setFairPlaySAPContext:(TVHKFairPlaySAPContext *)arg1 ;
-(BOOL)useTokenEncryption;
-(id)initWithUserIdentifier:(id)arg1 sessionState:(id)arg2 useTokenEncryption:(BOOL)arg3 requestSession:(id)arg4 ;
-(NSNumber *)tokenStatus;
-(void)setUseTokenEncryption:(BOOL)arg1 ;
-(id)_decryptTokenData:(id)arg1 ;
-(void)setTokenStatus:(NSNumber *)arg1 ;
@end

