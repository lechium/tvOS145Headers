/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString, NSArray, NSSet;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding> {

	TUHandle* _handle;

}

@property (nonatomic,copy,readonly) NSString * idsDestination; 
@property (nonatomic,copy,readonly) NSArray * idsDestinations; 
@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * handles; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(TUHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)handles;
-(id)initWithHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 ;
-(NSString *)idsDestination;
-(id)initWithDestination:(id)arg1 ;
-(id)initWithHandles:(id)arg1 ;
-(id)initWithContact:(id)arg1 additionalHandles:(id)arg2 ;
-(BOOL)isEqualToMember:(id)arg1 ;
-(NSArray *)idsDestinations;
-(BOOL)representsSameMemberAs:(id)arg1 ;
@end

