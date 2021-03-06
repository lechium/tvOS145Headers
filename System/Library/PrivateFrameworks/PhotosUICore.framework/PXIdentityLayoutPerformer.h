/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXIdentityLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* children;

}

@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) SCD_Struct_PX27 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX27)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(CGSize)performLayout;
@end

