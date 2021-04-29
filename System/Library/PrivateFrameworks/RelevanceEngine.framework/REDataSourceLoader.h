/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying> {

	REClassLoader* _loader;

}
+(id)defaultDataSourceLoader;
+(id)dataSourceLoaderWithDirectories:(id)arg1 ;
+(id)dataSourceLoaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 ;
+(id)disabledDataSourceLoader;
+(id)dataSourceLoaderWithDirectory:(id)arg1 ;
+(id)dataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)dataSourceLoaderWithDataSources:(id)arg1 ;
+(id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prewarm;
-(void)enumerateDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateDataSourceObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
@end

