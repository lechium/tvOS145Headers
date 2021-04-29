/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSURL, USKNode;

@interface USKScene : USKObject {

	TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>* _usdStage;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) USKNode * rootNode; 
+(id)newSceneWithURL:(id)arg1 ;
+(id)newSceneWithURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(USKNode *)rootNode;
-(id)metadata;
-(void)save;
-(id)objectAtPath:(id)arg1 ;
-(id)newNodeAtPath:(id)arg1 type:(id)arg2 ;
-(void)saveAndCreateUSDZPackageWithURL:(id)arg1 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)usdStage;
-(id)initWithUsdStage:(TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 fileURL:(id)arg2 ;
-(id)initSceneFromURL:(id)arg1 error:(id*)arg2 ;
-(id)newNodeAtPath:(id)arg1 type:(id)arg2 specifier:(id)arg3 ;
-(void)addSubLayerWithPath:(id)arg1 offset:(id)arg2 ;
-(id)initSceneFromURL:(id)arg1 ;
-(BOOL)exportToURL:(id)arg1 ;
-(void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1 ;
-(id)nodeAtPath:(id)arg1 ;
-(id)propertyAtPath:(id)arg1 ;
-(void)addSubLayerWithPath:(id)arg1 ;
-(id)subLayerPaths;
-(id)subLayerOffsets;
-(BOOL)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(id)metadataWithKey:(id)arg1 ;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(id)nodeIterator;
-(id)loadedNodeIterator;
-(void)dumpUSDA;
@end

