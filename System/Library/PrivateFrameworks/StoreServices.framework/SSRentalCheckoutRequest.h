/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSArray, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	long long _downloadIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	BOOL _shouldValidateRentalInfo;
	BOOL _checkoutWithPlay;
	unsigned long long _checkoutType;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (readonly) long long downloadIdentifier; 
@property (assign,nonatomic) BOOL shouldValidateRentalInfo;                                    //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (assign,getter=shouldCheckoutWithPlay,nonatomic) BOOL checkoutWithPlay;              //@synthesize checkoutWithPlay=_checkoutWithPlay - In the implementation block
@property (assign) unsigned long long checkoutType;                                            //@synthesize checkoutType=_checkoutType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSNumber *)accountIdentifier;
-(long long)downloadIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)sinfs;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)arg1 ;
-(BOOL)shouldCheckoutWithPlay;
-(void)setCheckoutWithPlay:(BOOL)arg1 ;
-(unsigned long long)checkoutType;
-(void)setCheckoutType:(unsigned long long)arg1 ;
@end

