/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXDebugHierarchyElement
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double zPosition; 
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,readonly) CGImageRef previewImage; 
@property (nonatomic,readonly) CGRect contentsRect; 
@property (nonatomic,readonly) NSString * contentsGravity; 
@property (nonatomic,readonly) CGColorRef backgroundColor; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL canHaveChildren; 
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,readonly) unsigned long long parentIdentifier; 
@required
-(NSString *)name;
-(unsigned long long)identifier;
-(double)alpha;
-(CGRect)frame;
-(CGRect)contentsRect;
-(double)zPosition;
-(NSString *)contentsGravity;
-(CGColorRef)backgroundColor;
-(unsigned long long)parentIdentifier;
-(CGImageRef)previewImage;
-(BOOL)canHaveChildren;

@end

