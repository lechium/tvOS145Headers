/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VNRequestProgressProviding <NSObject>
@property (nonatomic,copy) id progressHandler; 
@property (readonly) BOOL indeterminate; 
@required
-(BOOL)indeterminate;
-(id)progressHandler;
-(void)setProgressHandler:(/*^block*/id)arg1;

@end
