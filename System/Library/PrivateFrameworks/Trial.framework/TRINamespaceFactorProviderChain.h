/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@protocol TRINamespaceFactorProviding;
@class NSArray, NSString;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {

	NSArray* _directoryChain;
	NSArray* _providerChain;
	id<TRINamespaceFactorProviding> _installedProvider;
	id<TRINamespaceFactorProviding> _rolloutProvider;
	id<TRINamespaceFactorProviding> _experimentProvider;
	unsigned _namespaceId;
	NSString* _namespaceName;

}

@property (nonatomic,readonly) NSString * namespaceName;              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned namespaceId;                  //@synthesize namespaceId=_namespaceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 ;
+(id)factorProviderWithNamespaceName:(id)arg1 directoryChain:(id)arg2 treatmentLayers:(id)arg3 ;
+(id)factorProviderWithNamespaceName:(id)arg1 directoryChain:(id)arg2 ;
-(BOOL)isRegistered;
-(id)treatmentId;
-(NSString *)namespaceName;
-(unsigned)namespaceId;
-(id)levelForFactor:(id)arg1 ;
-(unsigned)namespaceCompatibilityVersion;
-(unsigned)namespaceVersion;
-(id)factorLevels;
-(id)rolloutId;
-(BOOL)hasAnyTreatmentInLayers:(unsigned long long)arg1 ;
-(id)initWithNamespaceName:(id)arg1 directoryChain:(id)arg2 treatmentLayers:(id)arg3 ;
-(id)treatmentIdForFactor:(id)arg1 ;
@end

