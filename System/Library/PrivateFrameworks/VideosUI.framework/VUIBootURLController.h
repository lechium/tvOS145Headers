/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface VUIBootURLController : NSObject {

	NSURL* _localAppURL;

}

@property (nonatomic,retain) NSURL * localAppURL;              //@synthesize localAppURL=_localAppURL - In the implementation block
-(id)init;
-(id)initWithLocalAppURL:(id)arg1 ;
-(void)fetchBootURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)localAppURL;
-(void)setLocalAppURL:(NSURL *)arg1 ;
@end

