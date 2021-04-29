/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, UIImage, NSError, TVImageProxy, NSMutableSet;

@interface _TVImagePromise : NSObject {

	NSURL* _imageURL;
	UIImage* _image;
	NSError* _error;
	unsigned long long _status;
	TVImageProxy* _imageProxy;
	NSMutableSet* _completionBlocks;

}

@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                    //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) NSMutableSet * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                      //@synthesize imageURL=_imageURL - In the implementation block
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImageURL:(id)arg1 ;
-(NSURL *)imageURL;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableSet *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableSet *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)stopResolving;
-(void)_startResolving;
-(void)_stopResolving;
-(void)_finishResolvingWithImage:(id)arg1 error:(id)arg2 ;
-(void)startResolving;
@end

