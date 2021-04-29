/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface SHLibrarySyncUpdateReport : NSObject {

	NSMutableArray* _locallyFoundTracks;
	NSMutableArray* _remoteOnlyTracks;
	NSMutableArray* _locallyFoundGroups;
	NSMutableArray* _remoteOnlyGroups;

}

@property (nonatomic,readonly) NSMutableArray * locallyFoundTracks;              //@synthesize locallyFoundTracks=_locallyFoundTracks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * remoteOnlyTracks;                //@synthesize remoteOnlyTracks=_remoteOnlyTracks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * locallyFoundGroups;              //@synthesize locallyFoundGroups=_locallyFoundGroups - In the implementation block
@property (nonatomic,readonly) NSMutableArray * remoteOnlyGroups;                //@synthesize remoteOnlyGroups=_remoteOnlyGroups - In the implementation block
-(id)init;
-(NSMutableArray *)locallyFoundTracks;
-(NSMutableArray *)remoteOnlyTracks;
-(NSMutableArray *)locallyFoundGroups;
-(NSMutableArray *)remoteOnlyGroups;
@end

