/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class MDLMesh, NSMutableArray, NSArray;

@interface _CUIThemeModelMeshRendition : CUIThemeRendition {

	MDLMesh* _mesh;
	NSMutableArray* _submeshKeys;

}

@property (readonly) NSArray * submeshKeys; 
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(unsigned long long)writeToData:(id)arg1 ;
-(id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2 ;
-(id)modelMesh;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(NSArray *)submeshKeys;
@end

