/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface REShortcutFilter : NSObject
+(unsigned long long)filterVersion;
-(id)init;
-(unsigned long long)_actionIdentifierForIntent:(id)arg1 ;
-(unsigned long long)_actionIdentifierForUserActivity:(id)arg1 ;
-(id)intentByFilteringIntent:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)userActivityByFilteringUserActivity:(id)arg1 withLevel:(unsigned long long)arg2 ;
-(id)identifierForIntent:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)identifierForUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

