/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, SHGroupMO, SHTrackMO;

@interface SHMetadataMO : NSManagedObject

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) SHGroupMO * group; 
@property (nonatomic,retain) SHTrackMO * track; 
+(id)fetchRequest;
@end

