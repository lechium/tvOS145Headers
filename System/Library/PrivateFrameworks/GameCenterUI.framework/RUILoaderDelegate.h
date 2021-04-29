/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)sessionConfigurationForLoader:(id)arg1;
-(void)loader:(id)arg1 loadResourcesForObjectModel:(id)arg2 completion:(/*^block*/id)arg3;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

