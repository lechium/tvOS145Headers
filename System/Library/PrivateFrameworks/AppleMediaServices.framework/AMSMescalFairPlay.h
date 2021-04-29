/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSMescalFairPlay : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	long long _mescalType;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
-(void)dealloc;
-(BOOL)isComplete;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(id)_dataWithFairPlayBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(id)initWithMescalType:(long long)arg1 error:(id*)arg2 ;
@end

