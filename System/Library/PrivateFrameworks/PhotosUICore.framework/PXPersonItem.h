/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPerson, UIImage;

@interface PXPersonItem : NSObject {

	int _faceImageRequestID;
	PHPerson* _modelObject;
	/*^block*/id _faceImageLoadingCompletionBlock;
	/*^block*/id _fastDisplayBlock;
	UIImage* _faceImage;

}

@property (assign) int faceImageRequestID;                        //@synthesize faceImageRequestID=_faceImageRequestID - In the implementation block
@property (copy) id faceImageLoadingCompletionBlock;              //@synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock - In the implementation block
@property (copy) id fastDisplayBlock;                             //@synthesize fastDisplayBlock=_fastDisplayBlock - In the implementation block
@property (__weak) UIImage * faceImage;                           //@synthesize faceImage=_faceImage - In the implementation block
@property (nonatomic,retain) PHPerson * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
-(id)initWithPerson:(id)arg1 ;
-(PHPerson *)modelObject;
-(void)setModelObject:(PHPerson *)arg1 ;
-(UIImage *)faceImage;
-(void)setFaceImage:(UIImage *)arg1 ;
-(void)updateWithModel:(id)arg1 ;
-(int)faceImageRequestID;
-(void)setFaceImageRequestID:(int)arg1 ;
-(id)faceImageLoadingCompletionBlock;
-(void)setFaceImageLoadingCompletionBlock:(id)arg1 ;
-(id)fastDisplayBlock;
-(void)setFastDisplayBlock:(id)arg1 ;
@end

