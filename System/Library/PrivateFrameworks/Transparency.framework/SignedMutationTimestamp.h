/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencySignatureVerifier, TransparencyManagedDataStore, NSString, NSData, Signature;

@interface SignedMutationTimestamp : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (retain) NSString * application; 
@property (nonatomic,copy) NSData * mutation; 
@property (nonatomic,retain) Signature * signature; 
@property (assign,nonatomic) BOOL hasSignature; 
+(id)descriptor;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencySignatureVerifier *)verifier;
-(void)setVerifier:(TransparencySignatureVerifier *)arg1 ;
-(id)parsedMutationWithError:(id*)arg1 ;
-(id)copyManagedObjectWithError:(id*)arg1 ;
@end

