/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface ML3MusicLibrary_SortMapEntry : NSObject {

	long long _nameOrder;
	NSString* _name;
	NSData* _sortKey;
	int _nameSection;
	BOOL _dirty;

}
-(id)description;
-(id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 ;
@end

