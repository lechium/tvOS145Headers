/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>
#import <TVHomeSharingKit/TVHKImageLoadingOperation.h>

@class TVImage, NSError, NSString, NSOperation;

@interface TVHKStoreTemplateURLImageLoadOperation : TVHKAsynchronousOperation <TVHKImageLoadingOperation> {

	BOOL _cropToFit;
	TVImage* _image;
	unsigned long long _scalingResult;
	NSError* _error;
	NSString* _templateImageURLString;
	NSOperation* _requestOperation;
	CGSize _scaleToSize;

}

@property (nonatomic,copy,readonly) NSString * templateImageURLString;              //@synthesize templateImageURLString=_templateImageURLString - In the implementation block
@property (nonatomic,retain) NSOperation * requestOperation;                        //@synthesize requestOperation=_requestOperation - In the implementation block
@property (nonatomic,retain) TVImage * image;                                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long scalingResult;                      //@synthesize scalingResult=_scalingResult - In the implementation block
@property (nonatomic,copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CGSize scaleToSize;                                  //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (nonatomic,readonly) BOOL cropToFit;                                      //@synthesize cropToFit=_cropToFit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(TVImage *)image;
-(void)setImage:(TVImage *)arg1 ;
-(void)executionDidBegin;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setScalingResult:(unsigned long long)arg1 ;
-(id)initWithTemplateImageURLString:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(unsigned long long)scalingResult;
-(NSString *)templateImageURLString;
-(void)_handleResponse:(id)arg1 andData:(id)arg2 ;
-(void)setRequestOperation:(NSOperation *)arg1 ;
-(NSOperation *)requestOperation;
@end

