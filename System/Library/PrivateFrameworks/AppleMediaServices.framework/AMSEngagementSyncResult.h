/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AMSEngagementSyncResult : NSObject <NSSecureCoding> {

	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
@end

