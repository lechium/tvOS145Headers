/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString;

@interface MRAsset : NSObject {

	NSString* mPath;

}

@property (copy) NSString * path; 
+(id)mrAssetWithPath:(id)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)workingPath;
-(id)workingPathForSize:(CGSize)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end
