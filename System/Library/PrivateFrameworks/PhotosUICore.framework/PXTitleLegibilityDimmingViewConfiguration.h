/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGViewUserData.h>

@class NSString;

@interface PXTitleLegibilityDimmingViewConfiguration : NSObject <PXGViewUserData> {

	NSString* _gradientImageName;

}

@property (nonatomic,copy,readonly) NSString * gradientImageName;              //@synthesize gradientImageName=_gradientImageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prepareForRender;
-(NSString *)gradientImageName;
-(id)initWithGradientImageName:(id)arg1 ;
@end

