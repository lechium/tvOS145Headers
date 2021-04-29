/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage, NSURL, NSString, NSCache;

@interface MKPlaceCollectionImageGradientOperation : NSOperation {

	BOOL _isRTL;
	UIImage* _sourceImage;
	UIImage* _blurredImage;
	NSURL* _url;
	long long _imageSizeType;
	NSString* _debugName;
	double _screenScale;
	NSString* _contentSizeCategory;
	NSString* _cacheId;
	NSCache* _downloadCache;
	NSCache* _blurringCache;
	CGSize _desiredSize;

}

@property (nonatomic,retain) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) CGSize desiredSize;                          //@synthesize desiredSize=_desiredSize - In the implementation block
@property (assign,nonatomic) long long imageSizeType;                     //@synthesize imageSizeType=_imageSizeType - In the implementation block
@property (nonatomic,retain) NSString * debugName;                        //@synthesize debugName=_debugName - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                  //@synthesize isRTL=_isRTL - In the implementation block
@property (assign,nonatomic) double screenScale;                          //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;              //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,retain) NSString * cacheId;                          //@synthesize cacheId=_cacheId - In the implementation block
@property (assign,nonatomic,__weak) NSCache * downloadCache;              //@synthesize downloadCache=_downloadCache - In the implementation block
@property (assign,nonatomic,__weak) NSCache * blurringCache;              //@synthesize blurringCache=_blurringCache - In the implementation block
@property (nonatomic,retain) UIImage * sourceImage;                       //@synthesize sourceImage=_sourceImage - In the implementation block
@property (nonatomic,readonly) UIImage * blurredImage;                    //@synthesize blurredImage=_blurredImage - In the implementation block
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)main;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(double)screenScale;
-(void)setScreenScale:(double)arg1 ;
-(BOOL)isRTL;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(UIImage *)sourceImage;
-(void)setDesiredSize:(CGSize)arg1 ;
-(CGSize)desiredSize;
-(void)setIsRTL:(BOOL)arg1 ;
-(NSCache *)downloadCache;
-(NSString *)cacheId;
-(void)setCacheId:(NSString *)arg1 ;
-(void)setDownloadCache:(NSCache *)arg1 ;
-(void)setSourceImage:(UIImage *)arg1 ;
-(NSCache *)blurringCache;
-(id)initWithUrl:(id)arg1 size:(CGSize)arg2 contentSizeCategory:(id)arg3 imageSizeType:(long long)arg4 name:(id)arg5 downloadCache:(id)arg6 gradientCache:(id)arg7 isRTL:(BOOL)arg8 screenScale:(double)arg9 cacheId:(id)arg10 ;
-(UIImage *)blurredImage;
-(long long)imageSizeType;
-(void)setImageSizeType:(long long)arg1 ;
-(void)setBlurringCache:(NSCache *)arg1 ;
@end
