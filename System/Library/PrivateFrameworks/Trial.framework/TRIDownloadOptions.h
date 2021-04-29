/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface TRIDownloadOptions : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	unsigned long long _discretionaryBehavior;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                     //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                             //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryBehavior;              //@synthesize discretionaryBehavior=_discretionaryBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setDiscretionaryBehavior:(unsigned long long)arg1 ;
-(unsigned long long)discretionaryBehavior;
-(id)initFromPersistedBehavior:(id)arg1 ;
-(id)serializeToPersistedBehavior;
@end

