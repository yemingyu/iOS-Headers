/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionView.h"

@interface CKEditableCollectionView : UICollectionView
{
    BOOL _editing;
}

@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

