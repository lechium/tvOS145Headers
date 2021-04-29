/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPLEngineIDMapping.h>

@protocol CPLEngineIDMapping;
@class NSString;

@interface _CPLOptimisticIDMapping : NSObject <CPLEngineIDMapping> {

	id<CPLEngineIDMapping> _idMapping;

}

@property (nonatomic,readonly) id<CPLEngineIDMapping> idMapping;              //@synthesize idMapping=_idMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPLEngineIDMapping>)idMapping;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1 ;
-(id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithIDMapping:(id)arg1 ;
@end

