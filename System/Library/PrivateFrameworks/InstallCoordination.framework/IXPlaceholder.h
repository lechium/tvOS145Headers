/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPlaceholderSeed, NSString, MIStoreMetadata;

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPlaceholderSeed * seed; 
@property (nonatomic,copy,readonly) NSString * bundleName; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,readonly) unsigned long long placeholderType; 
@property (nonatomic,readonly) unsigned long long installType; 
@property (nonatomic,readonly) BOOL hasIconPromise; 
@property (nonatomic,readonly) BOOL hasEntitlementsPromise; 
@property (nonatomic,readonly) BOOL hasPlugInPlaceholderPromises; 
@property (nonatomic,copy) MIStoreMetadata * metadata; 
+(BOOL)supportsSecureCoding;
+(id)_pngDataForCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
+(id)_loadUIKitClasses;
+(id)_iconDataFromAssetCatalogInBundle:(CFBundleRef)arg1 atURL:(id)arg2 error:(id*)arg3 ;
+(id)_iconDataFromIconFileInBundle:(CFBundleRef)arg1 atURL:(id)arg2 error:(id*)arg3 ;
+(id)_placeholderForBundle:(id)arg1 client:(unsigned long long)arg2 withParent:(id)arg3 installType:(unsigned long long)arg4 metadata:(id)arg5 error:(id*)arg6 ;
+(id)errorStringForMISError:(int)arg1 ;
+(id)_iconDataForBundle:(CFBundleRef)arg1 atURL:(id)arg2 error:(id*)arg3 ;
+(id)_infoPlistLocalizationDictionaryForBundleURL:(id)arg1 error:(id*)arg2 ;
+(id)placeholderForRemovableSystemAppWithBundleID:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)placeholderForInstallable:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 metadata:(id)arg4 error:(id*)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(MIStoreMetadata *)metadata;
-(unsigned long long)installType;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(void)setMetadata:(MIStoreMetadata *)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(unsigned long long)placeholderType;
-(Class)seedClass;
-(id)initAppPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 client:(unsigned long long)arg4 ;
-(BOOL)setMetadata:(id)arg1 error:(id*)arg2 ;
-(id)initPlugInPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 parentPlaceholder:(id)arg3 client:(unsigned long long)arg4 ;
-(BOOL)setPlaceholderAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)setEntitlementsPromise:(id)arg1 error:(id*)arg2 ;
-(BOOL)setIconPromise:(id)arg1 error:(id*)arg2 ;
-(BOOL)setInfoPlistLocalizations:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPlugInPlaceholderPromises:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigurationCompleteWithError:(id*)arg1 ;
-(BOOL)_doInitWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 isPlugin:(BOOL)arg4 ;
-(id)metadataWithError:(id*)arg1 ;
-(id)iconPromiseWithError:(id*)arg1 ;
-(BOOL)hasIconPromise;
-(id)infoPlistLocalizationsWithError:(id*)arg1 ;
-(id)entitlementsPromiseWithError:(id*)arg1 ;
-(BOOL)hasEntitlementsPromise;
-(id)plugInPlaceholderPromisesWithError:(id*)arg1 ;
-(BOOL)hasPlugInPlaceholderPromises;
-(BOOL)setSinfData:(id)arg1 error:(id*)arg2 ;
-(id)sinfDataWithError:(id*)arg1 ;
-(BOOL)setLaunchProhibited:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)launchProhibited:(BOOL*)arg1 error:(id*)arg2 ;
-(id)placeholderAttributesWithError:(id*)arg1 ;
@end

