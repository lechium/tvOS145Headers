/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol REClassLoaderConfiguration <NSObject>
@optional
-(BOOL)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2;

@required
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;

@end

