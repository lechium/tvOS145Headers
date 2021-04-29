/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVImageRepresentation.h>

@class TVImageProxy;

@interface __TVImageProxyRepresentation : _TVImageRepresentation {

	TVImageProxy* _imageProxy;
	CGImageRef _originalImage;

}
-(void)dealloc;
-(CGImageRef)_originalImage;
-(id)initWithImageProxy:(id)arg1 ;
-(id)_originalImageCacheKey;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
@end

