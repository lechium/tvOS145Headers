/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPRecoveryKeyValidatorInternal.h>

@protocol CDPDRecoveryKeyValidatorInternalDelegate;
@class CDPContext, NSString;

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInternal> {

	CDPContext* _context;
	id<CDPDRecoveryKeyValidatorInternalDelegate> _delegate;
	BOOL _recoveryKeyVerified;
	NSString* _recoveryKey;

}

@property (assign,nonatomic) BOOL recoveryKeyVerified;              //@synthesize recoveryKeyVerified=_recoveryKeyVerified - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                  //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(BOOL)recoveryKeyVerified;
-(void)setRecoveryKeyVerified:(BOOL)arg1 ;
@end

