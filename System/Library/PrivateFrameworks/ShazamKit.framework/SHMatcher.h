/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SHMatcher <NSObject>
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
@optional
-(oneway void)stop;

@required
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startRecognitionForRequest:(id)arg1;

@end

