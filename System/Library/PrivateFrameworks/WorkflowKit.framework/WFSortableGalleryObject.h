/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol WFSortableGalleryObject <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) long long minVersion; 
@property (nonatomic,readonly) NSString * persistentIdentifier; 
@required
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(long long)minVersion;

@end
