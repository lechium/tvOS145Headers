/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long* _indexes;
	unsigned long long _length;
	void* _reserved;

}

@property (nonatomic,readonly) long long section; 
@property (nonatomic,readonly) long long row; 
@property (nonatomic,readonly) long long item; 
@property (readonly) unsigned long long length; 
+(id)indexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
+(id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 ;
+(id)pt_indexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
+(id)bs_emptyPath;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
+(id)indexPath;
+(id)indexPathWithIndex:(unsigned long long)arg1 ;
-(long long)item;
-(long long)section;
-(long long)row;
-(long long)pt_section;
-(long long)pt_row;
-(id)bs_subpathWithRange:(NSRange)arg1 ;
-(id)bs_subpathFromPosition:(unsigned long long)arg1 ;
-(id)bs_indexPathByRemovingFirstIndex;
-(id)bs_indexPathByAddingPrefix:(id)arg1 ;
-(BOOL)bs_hasPrefix:(id)arg1 ;
-(id)bs_nearestCommonAncestorWithIndexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)indexAtPosition:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 range:(NSRange)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 ;
-(id)indexPathByRemovingLastIndex;
-(id)indexPathByAddingIndex:(unsigned long long)arg1 ;
@end

