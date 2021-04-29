/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CPLChangeStorage : NSObject

@property (nonatomic,readonly) NSString * storageDescription; 
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(BOOL)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(BOOL)getStoredChangeType:(unsigned long long*)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(NSString *)storageDescription;
@end

