/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol XBSnapshotManifestStore <NSObject>
@optional
-(void)beginAccessBlockForBundleIdentifier:(id)arg1;
-(void)endAccessBlockForBundleIdentifier:(id)arg1;

@required
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)clearManifestDataForBundleIdentifier:(id)arg1;
-(id)loadManifestDataForBundleIdentifier:(id)arg1;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

