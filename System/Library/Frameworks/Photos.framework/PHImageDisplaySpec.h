/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Photos/Photos-Structs.h>
@interface PHImageDisplaySpec : NSObject {

	long long _contentMode;
	CGSize _targetSize;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) long long contentMode;                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;              //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
-(id)description;
-(id)init;
-(id)shortDescription;
-(long long)contentMode;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(CGRect)arg3 ;
-(BOOL)hasExplicitCrop;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(BOOL)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(CGRect)normalizedCropRect;
@end

