/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString;

@interface SABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	NSString* _buildNumber;
	BOOL _dirty;
	BOOL _enabled;

}
+(id)sharedBinaryLocator;
-(id)init;
-(oneway void)done;
@end

